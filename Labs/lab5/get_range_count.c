/*--------------------------------*/
// Jeremy Persing
void get_range_count(int number_list[], int real_filesize, int *range_count) {
    *range_count = 0;
    int i;

    for (i = 0; i < real_filesize; i++) {
        if (number_list[i] < 100 && number_list[i] >= 90) {
            *range_count += 1;
        }
    }
}
