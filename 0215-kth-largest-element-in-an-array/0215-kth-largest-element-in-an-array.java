class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> pq=new PriorityQueue<>(Collections.reverseOrder());
        for(int i=0;i<nums.length;i++){
            pq.offer(nums[i]);
        }
        k=k-1;
        while(k>0){
            k--;
            pq.poll();
        }
        return pq.peek();
    }
}