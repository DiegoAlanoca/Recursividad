object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 502
  ClientWidth = 692
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 25
  object Label1: TLabel
    Left = 8
    Top = 464
    Width = 169
    Height = 30
    Caption = 'Label1 (Resultado)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 88
    Top = 40
    Width = 329
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 88
    Top = 88
    Width = 329
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 88
    Top = 136
    Width = 329
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    Text = 'Edit3'
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 191
    Width = 601
    Height = 42
    ColCount = 18
    DefaultColWidth = 30
    DefaultRowHeight = 35
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 3
  end
  object Button1: TButton
    Left = 440
    Top = 44
    Width = 137
    Height = 25
    Caption = 'Cargar Random'
    TabOrder = 4
    OnClick = Button1Click
  end
  object StringGrid2: TStringGrid
    Left = 8
    Top = 271
    Width = 665
    Height = 194
    ColCount = 18
    DefaultColWidth = 30
    DefaultRowHeight = 35
    FixedCols = 0
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 5
  end
  object Button2: TButton
    Left = 440
    Top = 92
    Width = 193
    Height = 25
    Caption = 'Redimensionar Vector'
    TabOrder = 6
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 440
    Top = 140
    Width = 193
    Height = 25
    Caption = 'Redimensionar Matriz'
    TabOrder = 7
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 615
    Top = 191
    Width = 75
    Height = 25
    Caption = 'Probar'
    TabOrder = 8
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 8
    Top = 239
    Width = 137
    Height = 25
    Caption = 'limpiar vector'
    TabOrder = 9
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 168
    Top = 239
    Width = 129
    Height = 25
    Caption = 'limpiar matriz'
    TabOrder = 10
    OnClick = Button6Click
  end
  object MainMenu1: TMainMenu
    Left = 632
    Top = 16
    object FuncionparacontarcantdeNumerosdeunacadena1: TMenuItem
      Caption = 'Recursividad'
      object FuncionparacontarcantdeNumerosdeunacadena2: TMenuItem
        Caption = 'Funcion para contar cant de Numeros de una cadena'
        OnClick = FuncionparacontarcantdeNumerosdeunacadena2Click
      end
      object N11Cargardelasiguienteforma1: TMenuItem
        Caption = '1.1 Cargar de la siguiente forma'
        OnClick = N11Cargardelasiguienteforma1Click
      end
      object N12CargarunVectoconlosdigitos1: TMenuItem
        Caption = '1.2 Cargar un Vecto con los digitos'
        OnClick = N12CargarunVectoconlosdigitos1Click
      end
      object N13CargarRandomMatriz1: TMenuItem
        Caption = '1.3 Cargar Random Matriz'
        OnClick = N13CargarRandomMatriz1Click
      end
      object N14HallarelmenordeunaMatriz1: TMenuItem
        Caption = '1.4 Hallar el menor de una Matriz'
        OnClick = N14HallarelmenordeunaMatriz1Click
      end
      object N15SelectionSortMatriz1: TMenuItem
        Caption = '1.5 SelectionSort Matriz'
        OnClick = N15SelectionSortMatriz1Click
      end
    end
    object Modelos1: TMenuItem
      Caption = 'Modelos'
      object Modelos2: TMenuItem
        Caption = 'Cargar un vector con la n primeras letras del vector'
        OnClick = Modelos2Click
      end
      object Devolverlacadenadeunvectorinvertido1: TMenuItem
        Caption = 'Devolver la cadena de un vector invertido'
        OnClick = Devolverlacadenadeunvectorinvertido1Click
      end
      object Generarmatrizformadeserpiente1: TMenuItem
        Caption = 'Generar matriz forma de serpiente'
        OnClick = Generarmatrizformadeserpiente1Click
      end
      object Ordenarnumeros1: TMenuItem
        Caption = 'Ordenar numeros (edit1)'
        OnClick = Ordenarnumeros1Click
      end
      object Verificarsielnumdelvectorelpalindromico1: TMenuItem
        Caption = 'Verificar si el num del vector el palindromico'
        OnClick = Verificarsielnumdelvectorelpalindromico1Click
      end
      object Crearmatrizinicialderechadecolumna1: TMenuItem
        Caption = 'Crear matriz inicial derecha de columna'
        OnClick = Crearmatrizinicialderechadecolumna1Click
      end
    end
    object Examen1: TMenuItem
      Caption = 'Examen '
      object N11: TMenuItem
        Caption = '1)'
        OnClick = N11Click
      end
      object N21: TMenuItem
        Caption = '2)'
        OnClick = N21Click
      end
      object N31: TMenuItem
        Caption = '3)'
        OnClick = N31Click
      end
    end
  end
end
