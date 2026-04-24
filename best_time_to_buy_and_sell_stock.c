int maxProfit(int* prices, int pricesSize) {
    int maxprofit= 0;
    int min = 0;

    for(int i = 1; i< pricesSize; i++){
        if(prices[i] < prices[min]){
            min = i;
        }
        else{
            int profit = prices[i] - prices[min];
            if(profit > maxprofit){
                maxprofit = profit;
            }
        }
    }
    return maxprofit;
}
