[Uno.Compiler.UxGenerated]
public partial class heightControlPage: Fuse.Controls.Page
{
    static heightControlPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public heightControlPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.StackPanel();
        var temp1 = new global::Fuse.Controls.Panel();
        var temp2 = new global::Fuse.Controls.Text();
        var temp3 = new global::Fuse.Controls.StackPanel();
        var temp4 = new global::customButton();
        var temp5 = new global::customButton();
        this.Name = __selector0;
        global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Top);
        temp.Children.Add(temp1);
        temp1.Color = float4(0.3490196f, 0.372549f, 1f, 1f);
        temp1.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(temp2);
        temp2.Value = "Hev og senk";
        temp2.FontSize = 22f;
        temp2.TextColor = float4(1f, 1f, 1f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp3.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp5);
        temp4.Aspect = 1f;
        temp4.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        temp4.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp4.TextColor = float4(0f, 0f, 0f, 255f);
        temp4.Text = "Opp";
        temp4.FontSize = 72;
        temp5.Aspect = 1f;
        temp5.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        temp5.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp5.TextColor = float4(0f, 0f, 0f, 255f);
        temp5.Text = "Ned";
        temp5.FontSize = 72;
        this.Children.Add(temp);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "heightControlPage";
}
