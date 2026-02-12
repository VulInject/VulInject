static int nspire_keypad_open(struct input_dev *input)
{
struct nspire_keypad *keypad = input_get_drvdata(input);
unsigned long val = 0, cycles_per_us, delay_cycles, row_delay_cycles;
int error;

error = clk_prepare_enable(keypad->clk);
if (error)
return error;

cycles_per_us = (clk_get_rate(keypad->clk) / 1000000);
if (cycles_per_us == 0)
cycles_per_us = 1;

delay_cycles = cycles_per_us * keypad->scan_interval;
WARN_ON(delay_cycles >= (1 << 16)); 
delay_cycles &= 0xffff;

row_delay_cycles = cycles_per_us * keypad->row_delay;
WARN_ON(row_delay_cycles >= (1 << 14)); 
row_delay_cycles &= 0x3fff;

val |= 3 << 0; 
val |= row_delay_cycles << 2; 
val |= delay_cycles << 16; 
writel(val, keypad->reg_base + KEYPAD_SCAN_MODE);

val = (KEYPAD_BITMASK_ROWS & 0xff) | (KEYPAD_BITMASK_COLS & 0xff)<<8;
writel(val, keypad->reg_base + KEYPAD_CNTL);


keypad->int_mask = 1 << 1;
writel(keypad->int_mask, keypad->reg_base + KEYPAD_INTMSK);

return 0;
}