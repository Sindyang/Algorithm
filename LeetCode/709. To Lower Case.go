func toLowerCase(str string) string {
	b := make([]byte, len(str))
	for i := 0; i < len(str); i++ {
		c := str[i]
		if c >= 'A' && c <= 'Z'{
			c = c + 'a' - 'A'
		}
		b[i] = c
	}
	return string(b)
}
