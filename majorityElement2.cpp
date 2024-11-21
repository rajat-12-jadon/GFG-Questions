int n = arr.size();
    int candidate1 = 0, candidate2 = 0, count1 = 0, count2 = 0;

    // Step 1: Identify potential candidates using Boyer-Moore Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate1) {
            count1++;
        } else if (arr[i] == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = arr[i];
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = arr[i];
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    // Step 2: Verify the candidates
    count1 = count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate1) count1++;
        else if (arr[i] == candidate2) count2++;
    }

    vector<int> result;
    if (count1 > n / 3) result.push_back(candidate1);
    if (count2 > n / 3) result.push_back(candidate2);

    // Sort the result in increasing order
    sort(result.begin(), result.end());

    return result;
