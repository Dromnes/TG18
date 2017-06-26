[Uno.Compiler.UxGenerated]
public partial class heightControlPage: Fuse.Controls.Page
{
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<float4> temp2_TextColor_inst;
    global::Uno.UX.Property<float4> temp3_TextColor_inst;
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
        var temp4 = new global::Fuse.Reactive.Data("colorPalette");
        var temp5 = new global::Fuse.Reactive.Member(temp4, "mdWhite");
        var temp = new global::Fuse.Controls.Text();
        temp_TextColor_inst = new TG18_FuseControlsTextControl_TextColor_Property(temp, __selector0);
        var temp6 = new global::Fuse.Reactive.Member(temp5, "code");
        var temp7 = new global::Fuse.Reactive.Data("colorPalette");
        var temp8 = new global::Fuse.Reactive.Member(temp7, "mdRed");
        var temp1 = new global::Fuse.Controls.Panel();
        temp1_Color_inst = new TG18_FuseControlsPanel_Color_Property(temp1, __selector1);
        var temp9 = new global::Fuse.Reactive.Member(temp8, "code");
        var temp10 = new global::Fuse.Reactive.Data("colorPalette");
        var temp11 = new global::Fuse.Reactive.Member(temp10, "mdBlack");
        var temp2 = new global::customButton();
        temp2_TextColor_inst = new TG18_customButton_TextColor_Property(temp2, __selector0);
        var temp12 = new global::Fuse.Reactive.Member(temp11, "code");
        var temp13 = new global::Fuse.Reactive.Data("colorPalette");
        var temp14 = new global::Fuse.Reactive.Member(temp13, "mdBlack");
        var temp3 = new global::customButton();
        temp3_TextColor_inst = new TG18_customButton_TextColor_Property(temp3, __selector0);
        var temp15 = new global::Fuse.Reactive.Member(temp14, "code");
        var temp16 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp17 = new global::Fuse.Controls.Panel();
        var temp18 = new global::Fuse.Controls.StackPanel();
        var temp19 = new global::Fuse.Reactive.DataBinding(temp_TextColor_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp20 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp21 = new global::Fuse.Controls.StackPanel();
        var temp22 = new global::Fuse.Reactive.DataBinding(temp2_TextColor_inst, temp12, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp23 = new global::Fuse.Reactive.DataBinding(temp3_TextColor_inst, temp15, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector2;
        temp16.LineNumber = 2;
        temp16.FileName = "Pages/heightControlPage.ux";
        temp16.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/heightControlPage.js"));
        temp17.Children.Add(temp18);
        temp17.Children.Add(temp21);
        global::Fuse.Controls.DockPanel.SetDock(temp18, Fuse.Layouts.Dock.Top);
        temp18.Children.Add(temp1);
        temp1.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp20);
        temp.Value = "Hev og senk";
        temp.FontSize = 22f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp19);
        temp21.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp21.Children.Add(temp2);
        temp21.Children.Add(temp3);
        temp2.Aspect = 1f;
        temp2.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        temp2.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp2.Text = "Opp";
        temp2.FontSize = 72;
        temp2.Bindings.Add(temp22);
        temp3.Aspect = 1f;
        temp3.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        temp3.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp3.Text = "Ned";
        temp3.FontSize = 72;
        temp3.Bindings.Add(temp23);
        __g_nametable.This = this;
        this.Children.Add(temp16);
        this.Children.Add(temp17);
    }
    static global::Uno.UX.Selector __selector0 = "TextColor";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "heightControlPage";
}
