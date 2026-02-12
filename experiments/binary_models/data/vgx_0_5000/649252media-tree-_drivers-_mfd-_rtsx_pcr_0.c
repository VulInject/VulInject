void rtsx_pci_start_run(struct rtsx_pcr *pcr)
{

if (pcr->remove_pci)
return;

if (pcr->state != PDEV_STAT_RUN) {
pcr->state = PDEV_STAT_RUN;
if (pcr->ops->enable_auto_blink)
pcr->ops->enable_auto_blink(pcr);

if (pcr->aspm_en)
rtsx_pci_disable_aspm(pcr);
}

mod_delayed_work(system_wq, &pcr->idle_work, msecs_to_jiffies(200));
}