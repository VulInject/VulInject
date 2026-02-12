static int led_halt(struct notifier_block *nb, unsigned long event, void *buf) 
{
char *txt;

if (notifier_disabled)
return NOTIFY_OK;

notifier_disabled = 1;
switch (event) {
case SYS_RESTART:	txt = "SYSTEM RESTART";
break;
case SYS_HALT:		txt = "SYSTEM HALT";
break;
case SYS_POWER_OFF:	txt = "SYSTEM POWER OFF";
break;
default:		return NOTIFY_DONE;
}


if (led_wq) {
cancel_delayed_work_sync(&led_task);
destroy_workqueue(led_wq);
led_wq = NULL;
}

if (lcd_info.model == DISPLAY_MODEL_LCD)
lcd_print(txt);
else
if (led_func_ptr)
led_func_ptr(0xff); 

return NOTIFY_OK;
}