monitor_insert_breakpoint (CORE_ADDR addr, char *shadow)
{
int i;
const unsigned char *bp;
int bplen;

monitor_debug ("MON inst bkpt %s\n", paddr (addr));
if (current_monitor->set_break == NULL)
error ("No set_break defined for this monitor");

if (current_monitor->flags & MO_ADDR_BITS_REMOVE)
addr = ADDR_BITS_REMOVE (addr);


bp = gdbarch_breakpoint_from_pc (current_gdbarch, &addr, &bplen);

for (i = 0; i < current_monitor->num_breakpoints; i++)
{
if (breakaddr[i] == 0)
{
breakaddr[i] = addr;
monitor_read_memory (addr, shadow, bplen);
monitor_printf (current_monitor->set_break, addr);
monitor_expect_prompt (NULL, 0);
return 0;
}
}

error ("Too many breakpoints (> %d) for monitor.", current_monitor->num_breakpoints);
}