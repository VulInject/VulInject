static bool is_ring_space_avail(struct tcmu_dev *udev, size_t cmd_size)
{
struct tcmu_mailbox *mb = udev->mb_addr;
size_t space, cmd_needed;
u32 cmd_head;

tcmu_flush_dcache_range(mb, sizeof(*mb));

cmd_head = mb->cmd_head % udev->cmdr_size; 


if (head_to_end(cmd_head, udev->cmdr_size) >= cmd_size)
cmd_needed = cmd_size;
else
cmd_needed = cmd_size + head_to_end(cmd_head, udev->cmdr_size);

space = spc_free(cmd_head, udev->cmdr_last_cleaned, udev->cmdr_size);
if (space < cmd_needed) {
pr_debug("no cmd space: %u %u %u\n", cmd_head,
udev->cmdr_last_cleaned, udev->cmdr_size);
return false;
}
return true;
}