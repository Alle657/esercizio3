#include <iostream>
using namespace std;

void calcolaStatistiche(int arr[], int dim, int& max, int& min, double& media) {
    media = 0;
    max = arr[0];
    min = arr[0];

    for (int i = 0; i < dim; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    for (int i = 0; i < dim; i++) {
        media += arr[i];
    }

    media /= dim;
}

int main() {
    int dim = 5;
    int arr[dim];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int max, min;
    double media;

    calcolaStatistiche(arr, dim, max, min, media);

   cout << "Max: " << max << "\n";
    cout << "Min: " << min << "\n";
    cout << "Media: " << media << "\n";

    return 0;
}
