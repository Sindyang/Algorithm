func uniqueMorseRepresentations(words []string) int {
    morse := [] string {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}
    map1 := map[string]int{}
    for _, value := range words{
        var str string
        for _, letter := range value{
            str += morse[letter-'a']
        }
        map1[str]++
    }
    return len(map1)
}
