package helpers

// CompareIntSlices - compares two slices of ints and returns true if they are equal
func CompareIntSlices(a, b []int) bool {
	if len(a) != len(b) {
		return false
	}
	for i, val := range a {
		if val != b[i] {
			return false
		}
	}
	return true
}