int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            // Update largest and secondLargest
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] < largest && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }

        // Check if second largest was updated
        if (secondLargest == INT_MIN) {
            return -1; // No valid second largest
        } else {
            return secondLargest;
        }
