#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

random_list_of_nums = [5, 2, 1, 8, 4]
bubble_sort(random_list_of_nums)
print(random_list_of_nums)

def selection_sort(nums):
    
    for i in range(len(nums)):
      
        lowest_value_index = i
       
        for j in range(i + 1, len(nums)):
            if nums[j] < nums[lowest_value_index]:
                lowest_value_index = j
      
        nums[i], nums[lowest_value_index] = nums[lowest_value_index], nums[i]



random_list_of_nums = [12, 8, 3, 20, 11]
selection_sort(random_list_of_nums)
print(random_list_of_nums)

def insertion_sort(nums):
   
    for i in range(1, len(nums)):
        item_to_insert = nums[i]
       
        j = i - 1
      
        while j >= 0 and nums[j] > item_to_insert:
            nums[j + 1] = nums[j]
            j -= 1
       
        nums[j + 1] = item_to_insert





def heap_sort(nums):
    n = len(nums)

   
    for i in range(n, -1, -1):
        heapify(nums, n, i)

   
    for i in range(n - 1, 0, -1):
        nums[i], nums[0] = nums[0], nums[i]
        heapify(nums, i, 0)



random_list_of_nums = [35, 12, 43, 8, 51]
heap_sort(random_list_of_nums)
print(random_list_of_nums)
	return 0;
}
