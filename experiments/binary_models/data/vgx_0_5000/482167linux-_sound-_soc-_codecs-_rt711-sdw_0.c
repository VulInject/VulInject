static int rt711_interrupt_callback(struct sdw_slave *slave,
struct sdw_slave_intr_status *status)
{
struct rt711_priv *rt711 = dev_get_drvdata(&slave->dev);

dev_dbg(&slave->dev,
"%s control_port_stat=%x", __func__, status->control_port);

mutex_lock(&rt711->disable_irq_lock);
if (status->control_port & 0x4 && !rt711->disable_irq) {
mod_delayed_work(system_power_efficient_wq,
&rt711->jack_detect_work, msecs_to_jiffies(250));
}
mutex_unlock(&rt711->disable_irq_lock);

return 0;
}