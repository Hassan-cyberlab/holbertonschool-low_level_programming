# Green Efficiency Analysis

## Measurement Methodology

I compiled every program with gcc using the strict flags from the project instructions, including Wall, Werror, Wextra and pedantic with the gnu89 standard, and I ran everything on the same computer inside WSL so the conditions stayed the same. To time the code I called the clock function right before and right after the part I wanted to measure, subtracted the two readings, and divided by CLOCKS_PER_SEC to get seconds. Printing and setup stayed outside the timed part. The baseline and comparison programs were each run three times, and the instrumentation program once, with all output saved in findings.md.

## Observed Performance Differences

The baseline loop ran 100 million iterations. The three runs took 0.416542, 0.342108 and 0.352322 seconds, which averages out to about 0.370 seconds.

The comparison program showed a much bigger difference. Both versions count the even numbers in an array of 50 thousand elements. The naive version uses two nested loops, so it ends up checking about 1.25 billion elements, and its work grows with the square of the input size. The single pass version looks at each element once, so it checks only 50 thousand and its work grows in direct proportion to the input size. The naive version took 1.157514, 1.054683 and 1.187704 seconds. The single pass version took 0.000041, 0.000040 and 0.000040 seconds. In every run the naive version was between roughly 26 thousand and 30 thousand times slower. That matches the roughly 25 thousand times more checks it performs.

The instrumentation program split a small job into three stages. In the recorded run the total was 0.001389 seconds. Building the data took 0.000624 seconds, processing took 0.000513 seconds, and the reduce step took 0.000252 seconds. That means building the data used about 45 percent of the time, processing about 37 percent, and the reduce step about 18 percent.

## Relation Between Runtime and Energy Consumption

A processor that stays busy longer generally draws power for longer, so a program that runs longer will probably use more energy. In my results the naive version kept the processor working for over a second on a job that the single pass version finished in about forty microseconds. Repeated many times, the naive one would likely cost far more energy. This is only an estimate based on runtime, because I did not measure power in watts.

## Limitations of the Experiment

The results were not perfectly steady. The baseline loop ran the same code each time, yet the slowest run at 0.416542 seconds was about 22 percent slower than the fastest at 0.342108 seconds. I only took three runs of the baseline and the comparison, and a single run of the instrumentation program, which is not enough for solid statistics, and a second run could split the stages differently. The instrumentation stages last around a millisecond or less, which is close to what the clock function can resolve, so the split between them is noisy. Also, the clock function reports processor time and not power, so any energy conclusion is an inference. Everything also ran in WSL on one machine, so another computer could give different numbers.

## Practical Engineering Takeaway

The biggest improvement in these experiments came from choosing a better algorithm and not from anything else, so that is the first place to look. Measure before and after any change, repeat the measurement, and report how much it varies. Without that, a speed difference might only be noise, and an efficiency claim cannot be trusted.
