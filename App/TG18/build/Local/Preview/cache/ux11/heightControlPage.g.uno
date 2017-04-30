[Uno.Compiler.UxGenerated]
public partial class heightControlPage: Fuse.Controls.Page
{
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
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
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = new global::Fuse.Reactive.Data("colorPalette");
        var temp3 = new global::Fuse.Reactive.Data("colorPalette");
        var temp = new global::Fuse.Drawing.GradientStop();
        temp_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Member(temp2, "bckgLightGreen");
        var temp1 = new global::Fuse.Drawing.GradientStop();
        temp1_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp1, __selector0);
        var temp5 = new global::Fuse.Reactive.Member(temp3, "bckgDarkGreen");
        var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new global::Fuse.Controls.Panel();
        var temp8 = new global::Fuse.Drawing.LinearGradient();
        var temp9 = new global::Fuse.Controls.StackPanel();
        var temp10 = new global::Fuse.Controls.Panel();
        var temp11 = new global::Fuse.Controls.Text();
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new global::customButton();
        var temp14 = new global::customButton();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp6.LineNumber = 2;
        temp6.FileName = "Pages/heightControlPage.ux";
        temp6.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/heightControlPage.js"));
        temp7.Background = temp8;
        temp7.Children.Add(temp9);
        temp7.Children.Add(temp12);
        temp7.Bindings.Add(temp15);
        temp7.Bindings.Add(temp16);
        temp8.AngleDegrees = 90f;
        temp8.Stops.Add(temp);
        temp8.Stops.Add(temp1);
        temp.Offset = 0.4f;
        temp1.Offset = 1f;
        global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Top);
        temp9.Children.Add(temp10);
        temp10.Color = float4(0.3490196f, 0.372549f, 1f, 1f);
        temp10.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp10.Children.Add(temp11);
        temp11.Value = "Hev og senk";
        temp11.FontSize = 22f;
        temp11.TextColor = float4(1f, 1f, 1f, 1f);
        temp11.Alignment = Fuse.Elements.Alignment.Center;
        temp12.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp13.Aspect = 1f;
        temp13.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        temp13.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp13.TextColor = float4(0f, 0f, 0f, 255f);
        temp13.Text = "Opp";
        temp13.FontSize = 72;
        temp14.Aspect = 1f;
        temp14.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        temp14.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp14.TextColor = float4(0f, 0f, 0f, 255f);
        temp14.Text = "Ned";
        temp14.FontSize = 72;
        __g_nametable.This = this;
        this.Children.Add(temp6);
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "heightControlPage";
}
