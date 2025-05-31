int partition(vector<int> &vec, int low, int high) {

    // Selecting last element as the pivot
    int pivot = vec[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (vec[j] <= pivot) {
            i++;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[high]);

    // Return the point of partition
    return (i + 1);
}

void quickSort(vector<int> &vec, int low, int high) {

    // Base case: This part will be executed till the starting
    // index low is lesser than the ending index high
    if (low < high) {

        // pi is Partitioning Index, arr[p] is now at
        // right place
        int pi = partition(vec, low, high);

        // Separately sort elements before and after the
        // Partition Index pi
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}

int main() {
    vector<int> vec = {10, 7, 8, 9, 1, 5};
    int n = vec.size();
	    quickSort(vec, 0, n - 1);

    for (auto i : vec) {
        cout << i << " ";
    }
    return 0;
}
