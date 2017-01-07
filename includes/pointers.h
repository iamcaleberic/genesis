void dynamicArray(void){
  // malloc is short for memory allocation
  int *dynamicArr = malloc(20 * sizeof(int));
  // dynamic arrays save mem by creating a pointer that stores beginning of array
  *dynamicArr = 10;
  // assign value to first position
  dynamicArr[1]= 100;

  printf("The size of dynamicArr is %d\n", sizeof(dynamicArr));
  // Note size of int is 4 bytes

  free(dynamicArr); // Release unused memory
}
