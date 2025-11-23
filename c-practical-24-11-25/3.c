#include <stdio.h>
int main()
{
    char input[300], output[300];
    int input_index = 0;
    int output_index = 0;
    int deleted = 0;

    printf("Enter a sentence:\n");
    scanf("%[^\n]s", input);
    while (input[input_index] != '\0')
    {
        if (input[input_index] == 't' &&
            input[input_index + 1] == 'h' &&
            input[input_index + 2] == 'e')
        {
            int before = (input_index == 0 || input[input_index - 1] == ' ' || input[input_index - 1] == '\t');
            int after = (input[input_index + 3] == ' ' || input[input_index + 3] == '\t' || input[input_index + 3] == '\0');
            if (before && after)
            {
                input_index += 3;
                deleted++;
                continue;
            }
        }
        output[output_index++] = input[input_index++];
    }
    output[output_index] = '\0';
    printf("\nModified line without the:\n%s", output);
    printf("\nTotal no of the deleted: %d", deleted);
}