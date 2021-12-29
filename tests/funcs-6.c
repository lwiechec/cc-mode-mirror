static struct frame *
make_terminal_frame (struct terminal *terminal)
{
    register struct frame *f;
    XSETFRAME (frame, f);
}
