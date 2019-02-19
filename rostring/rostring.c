#include <stdlib.h>
#include <unistd.h>

int ftisspace(char c)
{
    char *spaces = "\n\t ";
    for (;*spaces;spaces++)
        if (*spaces == c)
            return (1);
    return (0);
}

int startofword(char *str, int i)
{
    if (i == 0 && !ftisspace(str[i]))
        return (1);
    if (!ftisspace(str[i]) && ftisspace(str[i - 1]))
        return (1);
    return (0);
}

void rostring(char *str)
{
    int i;
    int size = 0;
    int count = 0;
    for (i = 0; str[i]; i++)
    {
        if (startofword(str, i))
            size++;
    }
    for (i = 0; count < size && str[i]; i++)
    {
        if (startofword(str, i))
        {
            count++;
            if (count > 1)
            {
                for (int j = i; str[j] && !ftisspace(str[j]); j++)
                    write(1, &str[j], 1);
                if (size != 1)
                    write (1, " ", 1);
            }
        }
    }
    for (i = 0; !startofword(str, i); i++)
        ;
    for (int j = i; str[j] && !ftisspace(str[j]); j++)
        write(1, &str[j], 1);
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    rostring(argv[1]);
}