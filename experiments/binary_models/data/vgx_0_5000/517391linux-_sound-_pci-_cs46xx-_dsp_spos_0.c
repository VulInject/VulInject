add_symbol (struct snd_cs46xx * chip, char * symbol_name, u32 address, int type)
{
struct dsp_spos_instance * ins = chip->dsp_spos_instance;
struct dsp_symbol_entry * symbol = NULL;
int index;

if (ins->symbol_table.nsymbols == (DSP_MAX_SYMBOLS - 1)) {
dev_err(chip->card->dev, "dsp_spos: symbol table is full\n");
return NULL;
}

if (cs46xx_dsp_lookup_symbol(chip,
symbol_name,
type) != NULL) {
dev_err(chip->card->dev,
"dsp_spos: symbol <%s> duplicated\n", symbol_name);
return NULL;
}

index = find_free_symbol_index (ins);

strcpy (ins->symbol_table.symbols[index].symbol_name, symbol_name);
ins->symbol_table.symbols[index].address = address;
ins->symbol_table.symbols[index].symbol_type = type;
ins->symbol_table.symbols[index].module = NULL;
ins->symbol_table.symbols[index].deleted = 0;
symbol = (ins->symbol_table.symbols + index);

if (index > ins->symbol_table.highest_frag_index) 
ins->symbol_table.highest_frag_index = index;

if (index == ins->symbol_table.nsymbols)
ins->symbol_table.nsymbols++; 

return symbol;
}