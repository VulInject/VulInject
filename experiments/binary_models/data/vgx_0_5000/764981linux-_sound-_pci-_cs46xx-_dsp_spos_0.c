_map_task_tree (struct snd_cs46xx *chip, char * name, u32 dest, u32 size)
{
struct dsp_spos_instance * ins = chip->dsp_spos_instance;
struct dsp_task_descriptor * desc = NULL;

if (ins->ntask == DSP_MAX_TASK_DESC - 1) {
dev_err(chip->card->dev,
"dsp_spos: got no place for other TASK\n");
return NULL;
}

if (name)
strcpy(ins->tasks[ins->ntask].task_name, name);
else
strcpy(ins->tasks[ins->ntask].task_name, "(NULL)");
ins->tasks[ins->ntask].address = dest;
ins->tasks[ins->ntask].size = size;


ins->tasks[ins->ntask].index = ins->ntask;
desc = (ins->tasks + ins->ntask);
ins->ntask++;

if (name)
add_symbol (chip,name,dest,SYMBOL_PARAMETER);
return desc;
}