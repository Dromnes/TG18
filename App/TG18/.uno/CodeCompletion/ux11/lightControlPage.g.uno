[Uno.Compiler.UxGenerated]
public partial class lightControlPage: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly lightControlPage __parent;
        [Uno.WeakReference] internal readonly lightControlPage __parentInstance;
        public Template(lightControlPage parent, lightControlPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_ButtonName_inst;
        global::Uno.UX.Property<float4> __self_ButtonColor_inst;
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<float4> __self_TextColor_inst;
        global::Uno.UX.Property<int> __self_FontSize_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::tg.ColorButton();
            __self_ButtonName_inst = new TG18_tgColorButton_ButtonName_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("name");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_ButtonColor_inst = new TG18_tgColorButton_ButtonColor_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("color");
            __self_Text_inst = new TG18_tgCircleButton_Text_Property(__self, __selector2);
            var temp2 = new global::Fuse.Reactive.Data("text");
            __self_TextColor_inst = new TG18_tgCircleButton_TextColor_Property(__self, __selector3);
            var temp3 = new global::Fuse.Reactive.Data("textColor");
            __self_FontSize_inst = new TG18_tgCircleButton_FontSize_Property(__self, __selector4);
            var temp4 = new global::Fuse.Reactive.Data("fontSize");
            var temp5 = new global::Fuse.Reactive.DataBinding(__self_ButtonName_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Reactive.DataBinding(__self_ButtonColor_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp7 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp8 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp9 = new global::Fuse.Reactive.DataBinding(__self_FontSize_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
            __self.Margin = float4(0f, 20f, 0f, 10f);
            __self.Bindings.Add(temp5);
            __self.Bindings.Add(temp6);
            __self.Bindings.Add(temp7);
            __self.Bindings.Add(temp8);
            __self.Bindings.Add(temp9);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "ButtonName";
        static global::Uno.UX.Selector __selector1 = "ButtonColor";
        static global::Uno.UX.Selector __selector2 = "Text";
        static global::Uno.UX.Selector __selector3 = "TextColor";
        static global::Uno.UX.Selector __selector4 = "FontSize";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static lightControlPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public lightControlPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("lightButtonsObs");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Navigation.Activated();
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Controls.ScrollView();
        var temp6 = new global::Fuse.Controls.StackPanel();
        var temp7 = new global::Fuse.Controls.Grid();
        var temp8 = new Template(this, this);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/lightControlPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Pages/lightControlPage.js"));
        temp3.Nodes.Add(temp4);
        temp4.Code = "\n\t\t\tvar helperFunctions = require(\"../Assets/JavaScript/helperFunctions\");\n\t\t\thelperFunctions.changeActivePage(\"lightControlPage\");\n\t\t";
        temp4.LineNumber = 5;
        temp4.FileName = "Pages/lightControlPage.ux";
        temp5.Children.Add(temp6);
        temp6.Children.Add(temp7);
        temp7.RowCount = 6;
        temp7.ColumnCount = 4;
        temp7.Children.Add(temp);
        temp.Templates.Add(temp8);
        temp.Bindings.Add(temp9);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp5);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "lightControlPage";
}
