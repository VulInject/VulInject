void choose_random_location(unsigned long input,
unsigned long input_size,
unsigned long *output,
unsigned long output_size,
unsigned long *virt_addr)
{
unsigned long random_addr, min_addr;

if (cmdline_find_option_bool("nokaslr")) {
warn("KASLR disabled: 'nokaslr' on cmdline.");
return;
}

boot_params->hdr.loadflags |= KASLR_FLAG;

if (IS_ENABLED(CONFIG_X86_32))
mem_limit = KERNEL_IMAGE_SIZE;
else
mem_limit = MAXMEM;


mem_avoid_init(input, input_size, *output);


min_addr = min(*output, 512UL << 20);

min_addr = ALIGN(min_addr, CONFIG_PHYSICAL_ALIGN);


random_addr = find_random_phys_addr(min_addr, output_size);
if (!random_addr) {
warn("Physical KASLR disabled: no suitable memory region!");
} else {

if (*output != random_addr)
*output = random_addr;
}



if (IS_ENABLED(CONFIG_X86_64))
random_addr = find_random_virt_addr(LOAD_PHYSICAL_ADDR, output_size);
*virt_addr = random_addr;
}