void
sol_ofs_dprintf_init()
{
char	*dbg_buf;

mutex_init(&sol_ofs_debug_mutex, NULL, MUTEX_DRIVER, NULL);

if (sol_ofs_debug_buf_size < SOL_OFS_DEBUG_EXTRA_SIZE) {
cmn_err(CE_NOTE, "sol_ofs:\t debug buf size 0x%x too small, "
"setting to 0x%x", sol_ofs_debug_buf_size,
SOL_OFS_DEBUG_BUF_SIZE);
sol_ofs_debug_buf_size = SOL_OFS_DEBUG_BUF_SIZE;
}

dbg_buf = kmem_zalloc(sol_ofs_debug_buf_size, KM_SLEEP);
mutex_enter(&sol_ofs_debug_mutex);
sol_ofs_debug_buf = dbg_buf;
sol_ofs_clear_dbg_buf();
mutex_exit(&sol_ofs_debug_mutex);
}