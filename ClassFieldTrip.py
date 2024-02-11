def merge_lists(list1, list2):
    result = ""
    i, j = 0, 0

    while i < len(list1) and j < len(list2):
        if list1[i] <= list2[j]:
            result += list1[i]
            i += 1
        else:
            result += list2[j]
            j += 1

    result += list1[i:]  
    result += list2[j:] 
    return result

ann_list = input().strip()
ben_list = input().strip()

field_trip_list = merge_lists(ann_list, ben_list)

print(field_trip_list)
