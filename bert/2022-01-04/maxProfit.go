package main

func main() {

}

func maxProfit(prices []int) int {
	var sum int
	for i := 0; i < len(prices)-1; i++ {
		if prices[i+1]-prices[i] > 0 {
			sum += prices[i+1] - prices[i]
		}
	}
	return sum
}
