from ._anvil_designer import Form1Template
from anvil import *

class Form1(Form1Template):

    def __init__(self, **properties):
    
        self.init_components(**properties)

        # Add items to the dropdown
        self.drSX.items = ["Insertion Sort", "Selection Sort", "Bubble Sort", "Merge Sort"]

    def btnSX_click(self, **event_args):
        input_text = self.txtSX.text
        try:
            arr = [int(x.strip()) for x in input_text.split(',')]
        except ValueError:
            self.lbSX.text = "Vui lòng nhập các số nguyên hợp lệ, cách nhau bởi dấu phẩy."
            return
        
        algorithm = self.drSX.selected_value
        
        if algorithm == "Insertion Sort":
            self.insertion_sort(arr)
        elif algorithm == "Selection Sort":
            self.selection_sort(arr)
        elif algorithm == "Bubble Sort":
            self.bubble_sort(arr)
        elif algorithm == "Merge Sort":
            self.merge_sort(arr)
        else:
            self.lbSX.text = "Vui lòng chọn một thuật toán sắp xếp."
            return
        
        self.lbSX.text = "Dãy số sau khi sắp xếp: " + ', '.join(map(str, arr))

    def insertion_sort(self, arr):
        for i in range(1, len(arr)):
            key = arr[i]
            j = i - 1
            while j >= 0 and key < arr[j]:
                arr[j + 1] = arr[j]
                j -= 1
            arr[j + 1] = key

    def selection_sort(self, arr):
        for i in range(len(arr)):
            min_idx = i
            for j in range(i + 1, len(arr)):
                if arr[j] < arr[min_idx]:
                    min_idx = j
            arr[i], arr[min_idx] = arr[min_idx], arr[i]

    def bubble_sort(self, arr):
        n = len(arr)
        for i in range(n):
            for j in range(0, n-i-1):
                if arr[j] > arr[j+1]:
                    arr[j], arr[j+1] = arr[j+1], arr[j]

    def merge_sort(self, arr):
        if len(arr) > 1:
            mid = len(arr) // 2
            L = arr[:mid]
            R = arr[mid:]

            self.merge_sort(L)
            self.merge_sort(R)

            i = j = k = 0
            while i < len(L) and j < len(R):
                if L[i] < R[j]:
                    arr[k] = L[i]
                    i += 1
                else:
                    arr[k] = R[j]
                    j += 1
                k += 1

            while i < len(L):
                arr[k] = L[i]
                i += 1
                k += 1

            while j < len(R):
                arr[k] = R[j]
                j += 1
                k += 1
