static void altera_hw_filt_release(void *main_dev, int filt_nr)
{
struct fpga_inode *temp_int = find_inode(main_dev);
struct netup_hw_pid_filter *pid_filt = NULL;

ci_dbg_print("%s\n", __func__);

if (temp_int != NULL) {
pid_filt = temp_int->internal->pid_filt[filt_nr - 1];

pid_filt->demux->start_feed = pid_filt->start_feed;
pid_filt->demux->stop_feed = pid_filt->stop_feed;

if (((--(temp_int->internal->filts_used)) <= 0) &&
((temp_int->internal->cis_used) <= 0)) {

ci_dbg_print("%s: Actually removing\n", __func__);

remove_inode(temp_int->internal);
kfree(pid_filt->internal);
}

kfree(pid_filt);

}

}