object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 441
  ClientWidth = 624
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
    Top = 315
    Width = 60
    Height = 30
    Caption = 'Label1'
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
    Top = 231
    Width = 585
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
    Left = 472
    Top = 112
    Width = 137
    Height = 25
    Caption = 'Cargar Random'
    TabOrder = 4
    OnClick = Button1Click
  end
  object MainMenu1: TMainMenu
    Left = 448
    Top = 24
    object FuncionparacontarcantdeNumerosdeunacadena1: TMenuItem
      Caption = 'Recursividad'
      object FuncionparacontarcantdeNumerosdeunacadena2: TMenuItem
        Caption = 'Funcion para contar cant de Numeros de una cadena'
        OnClick = FuncionparacontarcantdeNumerosdeunacadena2Click
      end
    end
  end
end
