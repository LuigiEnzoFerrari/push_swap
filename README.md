![norminette](https://github.com/LuigiEnzoFerrari/push_swap/actions/workflows/linter.yml/badge.svg)  

# PUSH_SWAP  

## Overview  

Push_swap is a project from ecole 42 where the goal is to make a algorithm able to sort a given stack using a auxiliar stack with a limited number of [instructions][instructions].  

## Myths about push_swap

Push_swap has practically nothing to do with **Big O notation**.  

Big O notation is used in Computer Science to describe the performance or complexity of an algorithm. Big O specifically describes the worst-case scenario.  
example: Searching a specific value on a array.  
![array with the searching element being the last one](https://raw.githubusercontent.com/LuigiEnzoFerrari/push_swap/orphan_name/n_complexity.png)  
The big O of this operation would be O(n).  

Push_swap is based of **[instructions][instructions]** on which of it has their on algorithms with their on complexities.  
example: Put a specific on top.  

![the complecity to find a elment and then to rotating the element until the top](https://raw.githubusercontent.com/LuigiEnzoFerrari/push_swap/orphan_name/n_complexity_to_top.png)  
We know to find a specific element the complexity is O(n), but to put that element in the top of the stack you should rotate, put the first one in the last one, until reachs that value. So the time complexity in that case would be O(n) + number of rotates * O(n).
But!!! The number of instructions, which is the real goal, was just n.  

https://rob-bell.net/2009/06/a-beginners-guide-to-big-o-notation

[instructions]: #