extern void gpu_p_step_hardware_init(bitstr_t *usable_gpus, char *tres_freq)
{
debug2("enter gpu_p_step_hardware_init()");

char *freq = NULL;
char *tmp = NULL;

xassert(tres_freq);
xassert(usable_gpus);

if (!usable_gpus)
return;		
if (!tres_freq)
return;		

tmp = strstr(tres_freq, "gpu:");
if (!tmp)
return;		

freq = xstrdup(tmp + 4);
tmp = strchr(freq, ';');
if (tmp)
tmp[0] = '\0';


FREE_NULL_BITMAP(saved_gpus);
saved_gpus = bit_copy(usable_gpus);


_set_freq(usable_gpus, freq);
xfree(freq);

debug2("exit gpu_p_step_hardware_init() normally");
}