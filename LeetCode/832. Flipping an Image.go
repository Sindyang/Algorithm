func flipAndInvertImage(A [][]int) [][]int {
    row := len(A)
    column := len(A[0])
    var result [][]int
    for i := 0; i < row; i++{
        temp := make([]int, 0)
        for j:= column-1; j >= 0; j--{
            temp = append(temp, A[i][j] ^ 1)
        }
        result = append(result,temp)
    }
    return result
}
