void
decompress_kernel(int mmu_on, unsigned char *zimage_data,
unsigned int zimage_len, unsigned long heap)
{
unsigned char *input_data = zimage_data;
int input_len = zimage_len;
unsigned char *output_data;

output_data = (unsigned char *)CONFIG_MEMORY_START + 0x2000
+ (mmu_on ? 0x80000000 : 0);
free_mem_ptr = heap;
free_mem_end_ptr = free_mem_ptr + BOOT_HEAP_SIZE;

puts("\nDecompressing Linux... ");
__decompress(input_data, input_len, NULL, NULL, output_data, 0,
NULL, error);
puts("done.\nBooting the kernel.\n");
}