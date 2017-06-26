[Uno.Compiler.UxGenerated]
public partial class pcControlPage: Fuse.Controls.Page
{
<<<<<<< HEAD
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly pcControlPage __parent;
        [Uno.WeakReference] internal readonly pcControlPage __parentInstance;
        public Template(pcControlPage parent, pcControlPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<float4> __self_TextColor_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::customButton();
            __self_Text_inst = new TG18_customButton_Text_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("text");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_TextColor_inst = new TG18_customButton_TextColor_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("textColor");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Aspect = 1f;
            __self.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
            __self.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
            __self.FontSize = 36;
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
        static global::Uno.UX.Selector __selector1 = "TextColor";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
=======
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> temp1_TextColor_inst;
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static pcControlPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public pcControlPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
<<<<<<< HEAD
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("pcControlButtons");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.Panel();
        var temp4 = new global::Fuse.Controls.StackPanel();
        var temp5 = new Template(this, this);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/pcControlPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Pages/pcControlPage.js"));
        temp3.Children.Add(temp4);
        temp4.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp4.Children.Add(temp);
        temp.Templates.Add(temp5);
        temp.Bindings.Add(temp6);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
=======
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
        temp8.FileName = "Pages/pcControlPage.ux";
        temp8.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Pages/pcControlPage.js"));
        temp9.Nodes.Add(temp10);
        temp10.Code = "\n\t\t\tvar helperFunctions = require(\"../Assets/JavaScript/helperFunctions\");\n\t\t\thelperFunctions.changeActivePage(\"pcControlPage\");\n\t\t";
        temp10.LineNumber = 5;
        temp10.FileName = "Pages/pcControlPage.ux";
        temp11.Children.Add(temp12);
        temp12.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp12.Children.Add(temp);
        temp12.Children.Add(temp14);
        temp12.Children.Add(temp1);
        temp.Aspect = 2f;
        temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp.Text = "Restart";
        temp.FontSize = 72;
        temp.Bindings.Add(temp13);
        temp1.Aspect = 2f;
        temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp1.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
        temp1.Text = "ON/OFF";
        temp1.FontSize = 72;
        temp1.Bindings.Add(temp15);
        __g_nametable.This = this;
        this.Children.Add(temp8);
        this.Children.Add(temp9);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "TextColor";
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
    static global::Uno.UX.Selector __selector1 = "pcControlPage";
}
