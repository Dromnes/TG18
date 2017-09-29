[Uno.Compiler.UxGenerated]
public partial class heightControlPage: Fuse.Controls.Page
{
    global::Uno.UX.Property<float4> temp_Value_inst;
    global::Uno.UX.Property<float4> temp1_TextColor_inst;
    global::Uno.UX.Property<float4> temp2_TextColor_inst;
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
        var temp = new global::Fuse.Resources.ResourceFloat4();
        temp_Value_inst = new TG18_FuseResourcesResourceFloat4_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("tabColor");
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp4 = new global::Fuse.Reactive.Data("colorPalette");
        var temp5 = new global::Fuse.Reactive.Member(temp4, "mdBlack");
        var temp1 = new global::tg.Button();
        temp1_TextColor_inst = new TG18_tgButton_TextColor_Property(temp1, __selector1);
        var temp6 = new global::Fuse.Reactive.Member(temp5, "code");
        var temp7 = new global::Fuse.Reactive.Data("colorPalette");
        var temp8 = new global::Fuse.Reactive.Member(temp7, "mdBlack");
        var temp2 = new global::tg.Button();
        temp2_TextColor_inst = new TG18_tgButton_TextColor_Property(temp2, __selector1);
        var temp9 = new global::Fuse.Reactive.Member(temp8, "code");
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp11 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp12 = new global::Fuse.Controls.Panel();
        var temp13 = new global::Fuse.Controls.StackPanel();
        var temp14 = new global::Fuse.Reactive.DataBinding(temp1_TextColor_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::tg.Separator();
        var temp16 = new global::Fuse.Reactive.DataBinding(temp2_TextColor_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector2;
        temp.Key = "TabColor";
        temp.Bindings.Add(temp10);
        temp11.LineNumber = 3;
        temp11.FileName = "Pages/heightControlPage.ux";
        temp11.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/heightControlPage.js"));
        temp12.Children.Add(temp13);
        temp13.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp13.Children.Add(temp1);
        temp13.Children.Add(temp15);
        temp13.Children.Add(temp2);
        temp1.Aspect = 2f;
        temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp1.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp1.Text = "\uF106";
        temp1.FontSize = 150;
        temp1.Font = global::MainView.fa;
        temp1.Bindings.Add(temp14);
        temp2.Aspect = 2f;
        temp2.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp2.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp2.Text = "\uF107";
        temp2.FontSize = 150;
        temp2.Font = global::MainView.fa;
        temp2.Bindings.Add(temp16);
        __g_nametable.This = this;
        this.Children.Add(temp);
        this.Children.Add(temp11);
        this.Children.Add(temp12);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "TextColor";
    static global::Uno.UX.Selector __selector2 = "heightControlPage";
}
