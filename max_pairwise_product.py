# python3


def max_pairwise_product_fast(numbers):
    n = len(numbers)
    max_index1 = -1
    for first in range(n):
        if((max_index1 == -1) or (numbers[first] > numbers[max_index1])):
            max_index1 = first
    max_index2 = -1
    for second in range(n):
        if((second != max_index1) and ((max_index2 == -1) or (numbers[second] > numbers[max_index2]))):
            max_index2 = second

    return numbers[max_index1] * numbers[max_index2]


if __name__ == '__main__':
    input_n = int(input())
    input_numbers = [int(x) for x in input().split()]
    print(max_pairwise_product_fast(input_numbers))
