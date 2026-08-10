class Solution {
    //Optimal Solution :- Approach using hashmap(elements-key and values-index) 
    //TC-O(n) and SC-O(n)
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer>map=new HashMap<>();

        for(int i=0;i<nums.length;i++)
        {
            int diff=target-nums[i];

            if(map.containsKey(diff)){
                return new int[]{map.get(diff),i};
            }

            map.put(nums[i],i);
        }

        return null;
    }
}