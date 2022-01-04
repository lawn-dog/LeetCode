package main

func main() {

}

func removeDuplicates(nums []int) int {
	numLen := len(nums)
	if numLen < 2 {
		return len(nums)
	}
	pre := 0
	for i := 1; i < numLen; i++ {
		if nums[i] != nums[pre] {
			pre++
			nums[pre] = nums[i]
		}
	}
	return pre + 1
}
