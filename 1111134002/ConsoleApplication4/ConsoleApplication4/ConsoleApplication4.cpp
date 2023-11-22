// Fig. 6.7: fig06_07.c
// Fig. 6.7: fig06_07.c
// Analyzing a student poll.
#include <stdio.h>
#define RESPONSES_SIZE 40 // define array sizes
#define FREQUENCY_SIZE 11

// function main begins program execution
void print_result(int frequency[FREQUENCY_SIZE]);
int main(void)
{
    // initialize frequency counters to 0
    int frequency[FREQUENCY_SIZE] = { 0 };

    // place the survey responses in the responses array
    int responses[RESPONSES_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
         1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
         5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    // for each answer, select value of an element of array responses
    // and use that value as an index in array frequency to 
    // determine element to increment
    for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
        ++frequency[responses[answer]];
    }

    print_result(frequency);

}
void print_result(int frequency[FREQUENCY_SIZE])
{
    int rating, i, j;

    printf("%s%17s\n", "Rating", "Frequency");

    // output the frequencies in a tabular format
    for (rating = 1; rating < FREQUENCY_SIZE; ++rating) {
        printf("%6d%17d\n", rating, frequency[rating]);
    }

    printf("%s%13s%17s\n", "Element", "Value", "Histogram");

    // for each element of array n, output a bar of the histogram
    for (i = 0; i < FREQUENCY_SIZE; ++i) {
        printf("%7u%13d        ", i, frequency[i]);

        for (j = 1; j <= frequency[i]; ++j) { // print one bar
            printf("%c", '*');
        }

        puts(""); // end a histogram bar with a newline
    }
}