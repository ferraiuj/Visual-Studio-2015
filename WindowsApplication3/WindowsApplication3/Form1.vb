


Public Class Form1
    Dim a As String
    Dim usefulLife As Double
    Dim p As Integer
    Dim asset As Double
    Dim salv As Double
    Dim deprec As Double
    Dim i As Integer
    Dim listHolds As Integer
    Dim list As New List(Of Integer)()

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If TextBox1.Text <> "" AndAlso TextBox2.Text <> "" Then


            asset = Convert.ToDouble(TextBox1.Text)
            asset = Double.Parse(TextBox1.Text)
            salv = Convert.ToDouble(TextBox2.Text)
            salv = Double.Parse(TextBox2.Text)

            p = Convert.ToInt32(usefulLife)

            list.Capacity = p
            listHolds = p + 1
            For i = 0 To p

                list.Insert(i, listHolds)

                listHolds -= 1

            Next
            deprec = Financial.SLN(asset, salv, usefulLife)

            Math.Round(deprec, 2)
            a = Convert.ToString(deprec)
            list.Reverse()
            If (usefulLife = 1) Then
                For i = 0 To p - 1
                    ListBox2.Items.Insert(i + 2, list(i) & "       |       " & a)
                Next
            End If
            If (usefulLife = 2) Then
                For i = 0 To p - 1
                    ListBox2.Items.Insert(i + 2, list(i) & "       |       " & a)
                Next
            End If
            If (usefulLife = 3) Then
                For i = 0 To p - 1
                    ListBox2.Items.Insert(i + 2, list(i) & "       |       " & a)
                Next
            End If
            If (usefulLife = 4) Then
                For i = 0 To p - 1
                    ListBox2.Items.Insert(i + 2, list(i) & "       |       " & a)
                Next
            End If
            If (usefulLife = 5) Then
                For i = 0 To p - 1
                    ListBox2.Items.Insert(i + 2, list(i) & "       |       " & a)
                Next
            End If
            If (usefulLife = 6) Then
                For i = 0 To p - 1
                    ListBox2.Items.Insert(i + 2, list(i) & "       |       " & a)
                Next
            End If
            If (usefulLife = 7) Then
                For i = 0 To p - 1
                    ListBox2.Items.Insert(i + 2, list(i) & "       |       " & a)
                Next
            End If


            Button1.Enabled = False

        End If
    End Sub

    Private Sub ListBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles ListBox1.SelectedIndexChanged

        If ListBox1.GetSelected(0) = True Then
            usefulLife = 1
        ElseIf ListBox1.GetSelected(1) = True Then
            usefulLife = 2
        ElseIf ListBox1.GetSelected(2) = True Then
            usefulLife = 3
        ElseIf ListBox1.GetSelected(3) = True Then
            usefulLife = 4
        ElseIf ListBox1.GetSelected(4) = True Then
            usefulLife = 5
        ElseIf ListBox1.GetSelected(5) = True Then
            usefulLife = 6
        ElseIf ListBox1.GetSelected(6) = True Then
            usefulLife = 7
        End If

    End Sub

    Private Sub TextBox1_KeyPress(sender As Object, e As KeyPressEventArgs) Handles TextBox1.KeyPress
        ' allow the text box to accept only numbers and the Backspace

        If (e.KeyChar < "0" OrElse e.KeyChar > "9") AndAlso e.KeyChar <> ControlChars.Back AndAlso e.KeyChar <> "." Then
            e.Handled = True
        End If
    End Sub

    Private Sub TextBox2_KeyPress(sender As Object, e As KeyPressEventArgs) Handles TextBox2.KeyPress
        ' allow the text box to accept only numbers and the Backspace

        If (e.KeyChar < "0" OrElse e.KeyChar > "9") AndAlso e.KeyChar <> ControlChars.Back AndAlso e.KeyChar <> "." Then
            e.Handled = True
        End If
    End Sub
    Private Sub Form_Load()

    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Button1.Enabled = True
        For i = 0 To p - 1
            ListBox2.Items.RemoveAt(2)
        Next
        list.Clear()
    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        ListBox1.SetSelected(0, True)
    End Sub
End Class
