/**
* _strlen - length of string
*
* @s: string
* Description: printing string's length
* Return: the length of the string as integer
 */

int _strlen(char *s)
{
        int len = 0;

        while (s[len] != '\0')
        {

                len++;

        }

        return (len);
}
