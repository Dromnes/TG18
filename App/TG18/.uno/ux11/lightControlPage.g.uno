[Uno.Compiler.UxGenerated]
public partial class lightControlPage: Fuse.Controls.Page
{
<<<<<<< HEAD
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
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<float4> __self_TextColor_inst;
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.Property<float4> temp1_Color_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::customButtonCircle();
            var temp2 = new global::Fuse.Reactive.Data("colorPalette");
            var temp3 = new global::Fuse.Reactive.Member(temp2, "mdBlack");
            __self_Text_inst = new TG18_customButtonCircle_Text_Property(__self, __selector0);
            var temp4 = new global::Fuse.Reactive.Data("text");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(__self, __selector1);
            var temp5 = new global::Fuse.Reactive.Data("textColor");
            var temp = new global::Fuse.Drawing.GradientStop();
            temp_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp, __selector2);
            var temp6 = new global::Fuse.Reactive.Data("color");
            var temp1 = new global::Fuse.Drawing.GradientStop();
            temp1_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp1, __selector2);
            var temp7 = new global::Fuse.Reactive.Member(temp3, "code");
            var temp8 = new global::Fuse.Drawing.LinearGradient();
            var temp9 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp10 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp12 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
            __self.Margin = float4(0f, 20f, 0f, 10f);
            __self.FontSize = 20;
            temp8.AngleDegrees = 120f;
            temp8.Stops.Add(temp);
            temp8.Stops.Add(temp1);
            temp.Offset = 0.4f;
            temp1.Offset = 1f;
            __self.Fills.Add(temp8);
            __self.Bindings.Add(temp9);
            __self.Bindings.Add(temp10);
            __self.Bindings.Add(temp11);
            __self.Bindings.Add(temp12);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
        static global::Uno.UX.Selector __selector1 = "TextColor";
        static global::Uno.UX.Selector __selector2 = "Color";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
=======
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<float4> temp2_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp3_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp4_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp4_TextColor_inst;
    global::Uno.UX.Property<float4> temp5_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp5_TextColor_inst;
    global::Uno.UX.Property<float4> temp6_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp6_TextColor_inst;
    global::Uno.UX.Property<float4> temp7_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp7_TextColor_inst;
    global::Uno.UX.Property<float4> temp8_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp8_TextColor_inst;
    global::Uno.UX.Property<float4> temp9_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp9_TextColor_inst;
    global::Uno.UX.Property<float4> temp10_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp11_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp12_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp13_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp13_TextColor_inst;
    global::Uno.UX.Property<float4> temp14_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp15_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp16_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp17_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp17_TextColor_inst;
    global::Uno.UX.Property<float4> temp18_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp19_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp20_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp21_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp21_TextColor_inst;
    global::Uno.UX.Property<float4> temp22_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp23_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp24_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp25_ButtonColor_inst;
    global::Uno.UX.Property<float4> temp25_TextColor_inst;
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
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
<<<<<<< HEAD
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("lightControlButtons");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.StackPanel();
        var temp4 = new global::Fuse.Controls.Grid();
        var temp5 = new Template(this, this);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/lightControlPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/lightControlPage.js"));
        temp3.Children.Add(temp4);
        temp4.RowCount = 6;
        temp4.ColumnCount = 4;
        temp4.Children.Add(temp);
        temp.Templates.Add(temp5);
        temp.Bindings.Add(temp6);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "lightControlPage";
=======
        var temp26 = new global::Fuse.Reactive.Data("colorPalette");
        var temp27 = new global::Fuse.Reactive.Member(temp26, "mdWhite");
        var temp = new global::Fuse.Controls.Text();
        temp_TextColor_inst = new TG18_FuseControlsTextControl_TextColor_Property(temp, __selector0);
        var temp28 = new global::Fuse.Reactive.Member(temp27, "code");
        var temp29 = new global::Fuse.Reactive.Data("colorPalette");
        var temp30 = new global::Fuse.Reactive.Member(temp29, "mdRed");
        var temp1 = new global::Fuse.Controls.Panel();
        temp1_Color_inst = new TG18_FuseControlsPanel_Color_Property(temp1, __selector1);
        var temp31 = new global::Fuse.Reactive.Member(temp30, "code");
        var temp32 = new global::Fuse.Reactive.Data("colorPalette");
        var temp33 = new global::Fuse.Reactive.Member(temp32, "white");
        var temp2 = new global::colorButton();
        temp2_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp2, __selector2);
        var temp34 = new global::Fuse.Reactive.Member(temp33, "code");
        var temp35 = new global::Fuse.Reactive.Data("colorPalette");
        var temp36 = new global::Fuse.Reactive.Member(temp35, "white");
        var temp3 = new global::colorButton();
        temp3_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp3, __selector2);
        var temp37 = new global::Fuse.Reactive.Member(temp36, "code");
        var temp38 = new global::Fuse.Reactive.Data("colorPalette");
        var temp39 = new global::Fuse.Reactive.Member(temp38, "black");
        var temp4 = new global::colorButton();
        temp4_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp4, __selector2);
        var temp40 = new global::Fuse.Reactive.Member(temp39, "code");
        var temp41 = new global::Fuse.Reactive.Data("colorPalette");
        var temp42 = new global::Fuse.Reactive.Member(temp41, "mdWhite");
        temp4_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(temp4, __selector0);
        var temp43 = new global::Fuse.Reactive.Member(temp42, "code");
        var temp44 = new global::Fuse.Reactive.Data("colorPalette");
        var temp45 = new global::Fuse.Reactive.Member(temp44, "red");
        var temp5 = new global::colorButton();
        temp5_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp5, __selector2);
        var temp46 = new global::Fuse.Reactive.Member(temp45, "code");
        var temp47 = new global::Fuse.Reactive.Data("colorPalette");
        var temp48 = new global::Fuse.Reactive.Member(temp47, "mdWhite");
        temp5_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(temp5, __selector0);
        var temp49 = new global::Fuse.Reactive.Member(temp48, "code");
        var temp50 = new global::Fuse.Reactive.Data("colorPalette");
        var temp51 = new global::Fuse.Reactive.Member(temp50, "red");
        var temp6 = new global::colorButton();
        temp6_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp6, __selector2);
        var temp52 = new global::Fuse.Reactive.Member(temp51, "code");
        var temp53 = new global::Fuse.Reactive.Data("colorPalette");
        var temp54 = new global::Fuse.Reactive.Member(temp53, "mdBlack");
        temp6_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(temp6, __selector0);
        var temp55 = new global::Fuse.Reactive.Member(temp54, "code");
        var temp56 = new global::Fuse.Reactive.Data("colorPalette");
        var temp57 = new global::Fuse.Reactive.Member(temp56, "green");
        var temp7 = new global::colorButton();
        temp7_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp7, __selector2);
        var temp58 = new global::Fuse.Reactive.Member(temp57, "code");
        var temp59 = new global::Fuse.Reactive.Data("colorPalette");
        var temp60 = new global::Fuse.Reactive.Member(temp59, "mdBlack");
        temp7_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(temp7, __selector0);
        var temp61 = new global::Fuse.Reactive.Member(temp60, "code");
        var temp62 = new global::Fuse.Reactive.Data("colorPalette");
        var temp63 = new global::Fuse.Reactive.Member(temp62, "blue");
        var temp8 = new global::colorButton();
        temp8_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp8, __selector2);
        var temp64 = new global::Fuse.Reactive.Member(temp63, "code");
        var temp65 = new global::Fuse.Reactive.Data("colorPalette");
        var temp66 = new global::Fuse.Reactive.Member(temp65, "mdWhite");
        temp8_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(temp8, __selector0);
        var temp67 = new global::Fuse.Reactive.Member(temp66, "code");
        var temp68 = new global::Fuse.Reactive.Data("colorPalette");
        var temp69 = new global::Fuse.Reactive.Member(temp68, "white");
        var temp9 = new global::colorButton();
        temp9_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp9, __selector2);
        var temp70 = new global::Fuse.Reactive.Member(temp69, "code");
        var temp71 = new global::Fuse.Reactive.Data("colorPalette");
        var temp72 = new global::Fuse.Reactive.Member(temp71, "mdBlack");
        temp9_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(temp9, __selector0);
        var temp73 = new global::Fuse.Reactive.Member(temp72, "code");
        var temp74 = new global::Fuse.Reactive.Data("colorPalette");
        var temp75 = new global::Fuse.Reactive.Member(temp74, "lightRed");
        var temp10 = new global::colorButton();
        temp10_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp10, __selector2);
        var temp76 = new global::Fuse.Reactive.Member(temp75, "code");
        var temp77 = new global::Fuse.Reactive.Data("colorPalette");
        var temp78 = new global::Fuse.Reactive.Member(temp77, "lightGreen");
        var temp11 = new global::colorButton();
        temp11_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp11, __selector2);
        var temp79 = new global::Fuse.Reactive.Member(temp78, "code");
        var temp80 = new global::Fuse.Reactive.Data("colorPalette");
        var temp81 = new global::Fuse.Reactive.Member(temp80, "lightBlue");
        var temp12 = new global::colorButton();
        temp12_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp12, __selector2);
        var temp82 = new global::Fuse.Reactive.Member(temp81, "code");
        var temp83 = new global::Fuse.Reactive.Data("colorPalette");
        var temp84 = new global::Fuse.Reactive.Member(temp83, "grey");
        var temp13 = new global::colorButton();
        temp13_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp13, __selector2);
        var temp85 = new global::Fuse.Reactive.Member(temp84, "code");
        var temp86 = new global::Fuse.Reactive.Data("colorPalette");
        var temp87 = new global::Fuse.Reactive.Member(temp86, "mdBlack");
        temp13_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(temp13, __selector0);
        var temp88 = new global::Fuse.Reactive.Member(temp87, "code");
        var temp89 = new global::Fuse.Reactive.Data("colorPalette");
        var temp90 = new global::Fuse.Reactive.Member(temp89, "orange");
        var temp14 = new global::colorButton();
        temp14_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp14, __selector2);
        var temp91 = new global::Fuse.Reactive.Member(temp90, "code");
        var temp92 = new global::Fuse.Reactive.Data("colorPalette");
        var temp93 = new global::Fuse.Reactive.Member(temp92, "cyan");
        var temp15 = new global::colorButton();
        temp15_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp15, __selector2);
        var temp94 = new global::Fuse.Reactive.Member(temp93, "code");
        var temp95 = new global::Fuse.Reactive.Data("colorPalette");
        var temp96 = new global::Fuse.Reactive.Member(temp95, "violet");
        var temp16 = new global::colorButton();
        temp16_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp16, __selector2);
        var temp97 = new global::Fuse.Reactive.Member(temp96, "code");
        var temp98 = new global::Fuse.Reactive.Data("colorPalette");
        var temp99 = new global::Fuse.Reactive.Member(temp98, "grey");
        var temp17 = new global::colorButton();
        temp17_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp17, __selector2);
        var temp100 = new global::Fuse.Reactive.Member(temp99, "code");
        var temp101 = new global::Fuse.Reactive.Data("colorPalette");
        var temp102 = new global::Fuse.Reactive.Member(temp101, "mdBlack");
        temp17_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(temp17, __selector0);
        var temp103 = new global::Fuse.Reactive.Member(temp102, "code");
        var temp104 = new global::Fuse.Reactive.Data("colorPalette");
        var temp105 = new global::Fuse.Reactive.Member(temp104, "lightOrange");
        var temp18 = new global::colorButton();
        temp18_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp18, __selector2);
        var temp106 = new global::Fuse.Reactive.Member(temp105, "code");
        var temp107 = new global::Fuse.Reactive.Data("colorPalette");
        var temp108 = new global::Fuse.Reactive.Member(temp107, "lightTurquoise");
        var temp19 = new global::colorButton();
        temp19_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp19, __selector2);
        var temp109 = new global::Fuse.Reactive.Member(temp108, "code");
        var temp110 = new global::Fuse.Reactive.Data("colorPalette");
        var temp111 = new global::Fuse.Reactive.Member(temp110, "purple");
        var temp20 = new global::colorButton();
        temp20_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp20, __selector2);
        var temp112 = new global::Fuse.Reactive.Member(temp111, "code");
        var temp113 = new global::Fuse.Reactive.Data("colorPalette");
        var temp114 = new global::Fuse.Reactive.Member(temp113, "grey");
        var temp21 = new global::colorButton();
        temp21_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp21, __selector2);
        var temp115 = new global::Fuse.Reactive.Member(temp114, "code");
        var temp116 = new global::Fuse.Reactive.Data("colorPalette");
        var temp117 = new global::Fuse.Reactive.Member(temp116, "mdBlack");
        temp21_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(temp21, __selector0);
        var temp118 = new global::Fuse.Reactive.Member(temp117, "code");
        var temp119 = new global::Fuse.Reactive.Data("colorPalette");
        var temp120 = new global::Fuse.Reactive.Member(temp119, "yellow");
        var temp22 = new global::colorButton();
        temp22_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp22, __selector2);
        var temp121 = new global::Fuse.Reactive.Member(temp120, "code");
        var temp122 = new global::Fuse.Reactive.Data("colorPalette");
        var temp123 = new global::Fuse.Reactive.Member(temp122, "turquoise");
        var temp23 = new global::colorButton();
        temp23_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp23, __selector2);
        var temp124 = new global::Fuse.Reactive.Member(temp123, "code");
        var temp125 = new global::Fuse.Reactive.Data("colorPalette");
        var temp126 = new global::Fuse.Reactive.Member(temp125, "pink");
        var temp24 = new global::colorButton();
        temp24_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp24, __selector2);
        var temp127 = new global::Fuse.Reactive.Member(temp126, "code");
        var temp128 = new global::Fuse.Reactive.Data("colorPalette");
        var temp129 = new global::Fuse.Reactive.Member(temp128, "grey");
        var temp25 = new global::colorButton();
        temp25_ButtonColor_inst = new TG18_colorButton_ButtonColor_Property(temp25, __selector2);
        var temp130 = new global::Fuse.Reactive.Member(temp129, "code");
        var temp131 = new global::Fuse.Reactive.Data("colorPalette");
        var temp132 = new global::Fuse.Reactive.Member(temp131, "mdBlack");
        temp25_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(temp25, __selector0);
        var temp133 = new global::Fuse.Reactive.Member(temp132, "code");
        var temp134 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp135 = new global::Fuse.Controls.StackPanel();
        var temp136 = new global::Fuse.Controls.StackPanel();
        var temp137 = new global::Fuse.Reactive.DataBinding(temp_TextColor_inst, temp28, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp138 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp31, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp139 = new global::Fuse.Controls.Grid();
        var temp140 = new global::Fuse.Reactive.DataBinding(temp2_ButtonColor_inst, temp34, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp141 = new global::Fuse.Reactive.DataBinding(temp3_ButtonColor_inst, temp37, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp142 = new global::Fuse.Reactive.DataBinding(temp4_ButtonColor_inst, temp40, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp143 = new global::Fuse.Reactive.DataBinding(temp4_TextColor_inst, temp43, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp144 = new global::Fuse.Reactive.DataBinding(temp5_ButtonColor_inst, temp46, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp145 = new global::Fuse.Reactive.DataBinding(temp5_TextColor_inst, temp49, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp146 = new global::Fuse.Reactive.DataBinding(temp6_ButtonColor_inst, temp52, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp147 = new global::Fuse.Reactive.DataBinding(temp6_TextColor_inst, temp55, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp148 = new global::Fuse.Reactive.DataBinding(temp7_ButtonColor_inst, temp58, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp149 = new global::Fuse.Reactive.DataBinding(temp7_TextColor_inst, temp61, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp150 = new global::Fuse.Reactive.DataBinding(temp8_ButtonColor_inst, temp64, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp151 = new global::Fuse.Reactive.DataBinding(temp8_TextColor_inst, temp67, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp152 = new global::Fuse.Reactive.DataBinding(temp9_ButtonColor_inst, temp70, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp153 = new global::Fuse.Reactive.DataBinding(temp9_TextColor_inst, temp73, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp154 = new global::Fuse.Reactive.DataBinding(temp10_ButtonColor_inst, temp76, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp155 = new global::Fuse.Reactive.DataBinding(temp11_ButtonColor_inst, temp79, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp156 = new global::Fuse.Reactive.DataBinding(temp12_ButtonColor_inst, temp82, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp157 = new global::Fuse.Reactive.DataBinding(temp13_ButtonColor_inst, temp85, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp158 = new global::Fuse.Reactive.DataBinding(temp13_TextColor_inst, temp88, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp159 = new global::Fuse.Reactive.DataBinding(temp14_ButtonColor_inst, temp91, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp160 = new global::Fuse.Reactive.DataBinding(temp15_ButtonColor_inst, temp94, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp161 = new global::Fuse.Reactive.DataBinding(temp16_ButtonColor_inst, temp97, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp162 = new global::Fuse.Reactive.DataBinding(temp17_ButtonColor_inst, temp100, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp163 = new global::Fuse.Reactive.DataBinding(temp17_TextColor_inst, temp103, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp164 = new global::Fuse.Reactive.DataBinding(temp18_ButtonColor_inst, temp106, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp165 = new global::Fuse.Reactive.DataBinding(temp19_ButtonColor_inst, temp109, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp166 = new global::Fuse.Reactive.DataBinding(temp20_ButtonColor_inst, temp112, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp167 = new global::Fuse.Reactive.DataBinding(temp21_ButtonColor_inst, temp115, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp168 = new global::Fuse.Reactive.DataBinding(temp21_TextColor_inst, temp118, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp169 = new global::Fuse.Reactive.DataBinding(temp22_ButtonColor_inst, temp121, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp170 = new global::Fuse.Reactive.DataBinding(temp23_ButtonColor_inst, temp124, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp171 = new global::Fuse.Reactive.DataBinding(temp24_ButtonColor_inst, temp127, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp172 = new global::Fuse.Reactive.DataBinding(temp25_ButtonColor_inst, temp130, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp173 = new global::Fuse.Reactive.DataBinding(temp25_TextColor_inst, temp133, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector3;
        temp134.LineNumber = 13;
        temp134.FileName = "Pages/lightControlPage.ux";
        temp134.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/lightControlPage.js"));
        temp135.Children.Add(temp136);
        temp135.Children.Add(temp139);
        global::Fuse.Controls.DockPanel.SetDock(temp136, Fuse.Layouts.Dock.Top);
        temp136.Children.Add(temp1);
        temp1.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp138);
        temp.Value = "Lysstyring";
        temp.FontSize = 22f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp137);
        temp139.RowCount = 6;
        temp139.ColumnCount = 4;
        temp139.Children.Add(temp2);
        temp139.Children.Add(temp3);
        temp139.Children.Add(temp4);
        temp139.Children.Add(temp5);
        temp139.Children.Add(temp6);
        temp139.Children.Add(temp7);
        temp139.Children.Add(temp8);
        temp139.Children.Add(temp9);
        temp139.Children.Add(temp10);
        temp139.Children.Add(temp11);
        temp139.Children.Add(temp12);
        temp139.Children.Add(temp13);
        temp139.Children.Add(temp14);
        temp139.Children.Add(temp15);
        temp139.Children.Add(temp16);
        temp139.Children.Add(temp17);
        temp139.Children.Add(temp18);
        temp139.Children.Add(temp19);
        temp139.Children.Add(temp20);
        temp139.Children.Add(temp21);
        temp139.Children.Add(temp22);
        temp139.Children.Add(temp23);
        temp139.Children.Add(temp24);
        temp139.Children.Add(temp25);
        temp2.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp2.Margin = float4(0f, 20f, 0f, 10f);
        temp2.ButtonName = "dimUp";
        temp2.Bindings.Add(temp140);
        temp3.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp3.Margin = float4(0f, 20f, 0f, 10f);
        temp3.ButtonName = "dimDown";
        temp3.Bindings.Add(temp141);
        temp4.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp4.Margin = float4(0f, 20f, 0f, 10f);
        temp4.Text = "OFF";
        temp4.FontSize = 28;
        temp4.ButtonName = "off";
        temp4.Bindings.Add(temp142);
        temp4.Bindings.Add(temp143);
        temp5.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp5.Margin = float4(0f, 20f, 0f, 10f);
        temp5.Text = "ON";
        temp5.FontSize = 28;
        temp5.ButtonName = "on";
        temp5.Bindings.Add(temp144);
        temp5.Bindings.Add(temp145);
        temp6.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp6.Margin = float4(0f, 20f, 0f, 10f);
        temp6.Text = "R";
        temp6.FontSize = 28;
        temp6.ButtonName = "red";
        temp6.Bindings.Add(temp146);
        temp6.Bindings.Add(temp147);
        temp7.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp7.Margin = float4(0f, 20f, 0f, 10f);
        temp7.Text = "G";
        temp7.FontSize = 28;
        temp7.ButtonName = "green";
        temp7.Bindings.Add(temp148);
        temp7.Bindings.Add(temp149);
        temp8.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp8.Margin = float4(0f, 20f, 0f, 10f);
        temp8.Text = "B";
        temp8.FontSize = 28;
        temp8.ButtonName = "blue";
        temp8.Bindings.Add(temp150);
        temp8.Bindings.Add(temp151);
        temp9.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp9.Margin = float4(0f, 20f, 0f, 10f);
        temp9.Text = "W";
        temp9.FontSize = 26;
        temp9.ButtonName = "white";
        temp9.Bindings.Add(temp152);
        temp9.Bindings.Add(temp153);
        temp10.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp10.Margin = float4(0f, 20f, 0f, 10f);
        temp10.ButtonName = "lightRed";
        temp10.Bindings.Add(temp154);
        temp11.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp11.Margin = float4(0f, 20f, 0f, 10f);
        temp11.ButtonName = "lightGreen";
        temp11.Bindings.Add(temp155);
        temp12.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp12.Margin = float4(0f, 20f, 0f, 10f);
        temp12.ButtonName = "lightBlue";
        temp12.Bindings.Add(temp156);
        temp13.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp13.Margin = float4(0f, 20f, 0f, 10f);
        temp13.Text = "FLASH";
        temp13.FontSize = 18;
        temp13.ButtonName = "flash";
        temp13.Bindings.Add(temp157);
        temp13.Bindings.Add(temp158);
        temp14.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp14.Margin = float4(0f, 20f, 0f, 10f);
        temp14.ButtonName = "orange";
        temp14.Bindings.Add(temp159);
        temp15.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp15.Margin = float4(0f, 20f, 0f, 10f);
        temp15.ButtonName = "cyan";
        temp15.Bindings.Add(temp160);
        temp16.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp16.Margin = float4(0f, 20f, 0f, 10f);
        temp16.ButtonName = "violet";
        temp16.Bindings.Add(temp161);
        temp17.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp17.Margin = float4(0f, 20f, 0f, 10f);
        temp17.Text = "STROBE";
        temp17.FontSize = 18;
        temp17.ButtonName = "strobe";
        temp17.Bindings.Add(temp162);
        temp17.Bindings.Add(temp163);
        temp18.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp18.Margin = float4(0f, 20f, 0f, 10f);
        temp18.ButtonName = "lightOrange";
        temp18.Bindings.Add(temp164);
        temp19.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp19.Margin = float4(0f, 20f, 0f, 10f);
        temp19.ButtonName = "lightTurquoise";
        temp19.Bindings.Add(temp165);
        temp20.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp20.Margin = float4(0f, 20f, 0f, 10f);
        temp20.ButtonName = "purple";
        temp20.Bindings.Add(temp166);
        temp21.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp21.Margin = float4(0f, 20f, 0f, 10f);
        temp21.Text = "FADE";
        temp21.FontSize = 18;
        temp21.ButtonName = "fade";
        temp21.Bindings.Add(temp167);
        temp21.Bindings.Add(temp168);
        temp22.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp22.Margin = float4(0f, 20f, 0f, 10f);
        temp22.ButtonName = "yellow";
        temp22.Bindings.Add(temp169);
        temp23.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp23.Margin = float4(0f, 20f, 0f, 10f);
        temp23.ButtonName = "turquoise";
        temp23.Bindings.Add(temp170);
        temp24.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp24.Margin = float4(0f, 20f, 0f, 10f);
        temp24.ButtonName = "pink";
        temp24.Bindings.Add(temp171);
        temp25.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp25.Margin = float4(0f, 20f, 0f, 10f);
        temp25.Text = "SMOOTH";
        temp25.FontSize = 18;
        temp25.ButtonName = "smooth";
        temp25.Bindings.Add(temp172);
        temp25.Bindings.Add(temp173);
        __g_nametable.This = this;
        this.Children.Add(temp134);
        this.Children.Add(temp135);
    }
    static global::Uno.UX.Selector __selector0 = "TextColor";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "ButtonColor";
    static global::Uno.UX.Selector __selector3 = "lightControlPage";
>>>>>>> 10b490d17f581411dec90f73b2587559addec886
}
