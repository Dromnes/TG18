[Uno.Compiler.UxGenerated]
public partial class heightControlPage: Fuse.Controls.Page
{
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> temp1_TextColor_inst;
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
        var temp3 = new global::Fuse.Reactive.Member(temp2, "mdBlack");
        var temp = new global::tg.Button();
        temp_TextColor_inst = new TG18_tgButton_TextColor_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Member(temp3, "code");
        var temp5 = new global::Fuse.Reactive.Data("colorPalette");
        var temp6 = new global::Fuse.Reactive.Member(temp5, "mdBlack");
        var temp1 = new global::tg.Button();
        temp1_TextColor_inst = new TG18_tgButton_TextColor_Property(temp1, __selector0);
        var temp7 = new global::Fuse.Reactive.Member(temp6, "code");
        var temp8 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new global::Fuse.Navigation.Activated();
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Controls.Panel();
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_TextColor_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::tg.Separator();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp1_TextColor_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp8.LineNumber = 2;
        temp8.FileName = "Pages/heightControlPage.ux";
        temp8.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Pages/heightControlPage.js"));
        temp9.Nodes.Add(temp10);
        temp10.Code = "\n\t\t\tvar helperFunctions = require(\"../Assets/JavaScript/helperFunctions\");\n\t\t\thelperFunctions.changeActivePage(\"heightControlPage\");\n\t\t";
        temp10.LineNumber = 5;
        temp10.FileName = "Pages/heightControlPage.ux";
        temp11.Children.Add(temp12);
        temp12.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp12.Children.Add(temp);
        temp12.Children.Add(temp14);
        temp12.Children.Add(temp1);
        temp.Aspect = 2f;
        temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp.Text = "Opp";
        temp.FontSize = 72;
        temp.Bindings.Add(temp13);
        temp1.Aspect = 2f;
        temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp1.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp1.Text = "Ned";
        temp1.FontSize = 72;
        temp1.Bindings.Add(temp15);
        __g_nametable.This = this;
        this.Children.Add(temp8);
        this.Children.Add(temp9);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "TextColor";
    static global::Uno.UX.Selector __selector1 = "heightControlPage";
}
