void cpu_detect_cache_sizes(struct cpuinfo_x86 *c)
{
unsigned int n, dummy, ebx, ecx, edx, l2size;

n = c->extended_cpuid_level;

if (n >= 0x80000005) {
cpuid(0x80000005, &dummy, &ebx, &ecx, &edx);
c->x86_cache_size = (ecx>>24) + (edx>>24);

c->x86_tlbsize = 0;
}

if (n < 0x80000006)	
return;

cpuid(0x80000006, &dummy, &ebx, &ecx, &edx);
l2size = ecx >> 16;

c->x86_tlbsize += ((ebx >> 16) & 0xfff) + (ebx & 0xfff);

if (this_cpu->legacy_cache_size)
l2size = this_cpu->legacy_cache_size(c, l2size);


if (cachesize_override != -1)
l2size = cachesize_override;

if (l2size == 0)
return;		

c->x86_cache_size = l2size;
}