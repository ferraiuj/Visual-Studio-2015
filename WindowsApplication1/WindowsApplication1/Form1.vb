Public Class Form1
    Dim h As Double


    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim i As Double
        Dim s As Double
        Dim c As Double = 15
        Dim x As Double
        TextBox4.Text = TextBox4.Text.Replace(",", "")
        TextBox4.Text = TextBox4.Text.Replace("$", "")
        TextBox4.Text = TextBox4.Text.Trim()

        i = Convert.ToDouble(TextBox4.Text)
        i = Double.Parse(TextBox4.Text)

        h = i + h

        If h >= 100 Then c = 0

        s = h * 0.03
        x = s + c + h
        TextBox4.Text = "$" + Convert.ToString(i)
        TextBox5.Text = "$" + Convert.ToString(h)
        TextBox1.Text = "$" + Convert.ToString(s)
        TextBox2.Text = "$" + Convert.ToString(c)
        TextBox3.Text = "$" + Convert.ToString(x)


        'h = Convert.ToDouble(TextBox5.Text)
        'h = Double.Parse(TextBox5.Text)
    End Sub

    Private Sub TextBox4_KeyPress(sender As Object, e As KeyPressEventArgs) Handles TextBox4.KeyPress
        Dim allowedChars As String = "0123456789$,."

        If allowedChars.IndexOf(e.KeyChar) = -1 Then
            e.Handled = True
        End If

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        TextBox5.Text = "$0.00"
        TextBox4.Text = "$0.00"
        TextBox3.Text = "$0.00"
        TextBox2.Text = "$0.00"
        TextBox1.Text = "$0.00"


    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        End
    End Sub
End Class
