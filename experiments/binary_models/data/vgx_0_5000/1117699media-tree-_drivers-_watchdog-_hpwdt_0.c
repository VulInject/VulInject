static int hpwdt_pretimeout(unsigned int ulReason, struct pt_regs *regs)
{
unsigned long rom_pl;
static int die_nmi_called;

if (!hpwdt_nmi_decoding)
return NMI_DONE;

spin_lock_irqsave(&rom_lock, rom_pl);
if (!die_nmi_called && !is_icru && !is_uefi)
asminline_call(&cmn_regs, cru_rom_addr);
die_nmi_called = 1;
spin_unlock_irqrestore(&rom_lock, rom_pl);

if (allow_kdump)
hpwdt_stop();

if (!is_icru && !is_uefi) {
if (cmn_regs.u1.ral == 0) {
nmi_panic(regs, "An NMI occurred, but unable to determine source.\n");
return NMI_HANDLED;
}
}
nmi_panic(regs, "An NMI occurred. Depending on your system the reason "
"for the NMI is logged in any one of the following "
"resources:\n"
"1. Integrated Management Log (IML)\n"
"2. OA Syslog\n"
"3. OA Forward Progress Log\n"
"4. iLO Event Log");

return NMI_HANDLED;
}