void
changealpha(const Arg *arg)
{
    if((alpha > 0 && arg->f < 0) || (alpha < 1 && arg->f > 0))
        alpha += arg->f;
    if(alpha < 0)
        alpha = 0;
    if(alpha > 1)
        alpha = 1;

    xloadcols();
    redraw();
}
