func numJewelsInStones(J string, S string) int {
	jewels := make(map[byte]int)
	for i := 0; i < len(J); i++{
		jewels[J[i]] = 1
	}
	var result int = 0
	for i := 0; i < len(S); i++{
		 _, ok := jewels[S[i]]
		if ok {
			result++
		}
	}
	return result	
}
