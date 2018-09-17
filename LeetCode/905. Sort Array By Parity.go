func sortArrayByParity(A []int) []int {
    start := 0
    end := len(A) - 1
    for start < end{
        for (start < end) && (A[start] % 2 == 0){
                start++
        }
        for (start < end) && (A[end] % 2 == 1){
                end--
        }
        A[start], A[end] = A[end], A[start]
    }
    return A
}
